import 'package:http/http.dart' as http;
import 'dart:convert';

class NexaSDK {
  final String nodeUrl;

  NexaSDK(this.nodeUrl);

  Future<Map<String, dynamic>> getLatestBlock() async {
    var response = await http.get(Uri.parse('$nodeUrl/blocks/latest'));
    return jsonDecode(response.body);
  }

  Future<Map<String, dynamic>> getBalance(String walletAddress) async {
    var response = await http.get(Uri.parse('$nodeUrl/wallet/balance'));
    return jsonDecode(response.body);
  }

  Future<Map<String, dynamic>> sendTransaction(String sender, String receiver, double amount) async {
    var response = await http.post(
      Uri.parse('$nodeUrl/wallet/send'),
      headers: {"Content-Type": "application/json"},
      body: jsonEncode({"sender": sender, "receiver": receiver, "amount": amount}),
    );
    return jsonDecode(response.body);
  }
}
