import requests

class NexaSDK:
    def __init__(self, node_url):
        self.node_url = node_url

    def get_latest_block(self):
        response = requests.get(f"{self.node_url}/blocks/latest")
        return response.json()

    def get_balance(self, wallet_address):
        response = requests.get(f"{self.node_url}/wallet/balance")
        return response.json()

    def send_transaction(self, sender, receiver, amount):
        data = {"sender": sender, "receiver": receiver, "amount": amount}
        response = requests.post(f"{self.node_url}/wallet/send", json=data)
        return response.json()

    def deploy_smart_contract(self, contract_code):
        data = {"contract_code": contract_code}
        response = requests.post(f"{self.node_url}/contract/deploy", json=data)
        return response.json()

    def call_smart_contract(self, contract_id):
        data = {"contract_id": contract_id}
        response = requests.post(f"{self.node_url}/contract/call", json=data)
        return response.json()
