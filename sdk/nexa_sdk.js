const axios = require("axios");

class NexaSDK {
    constructor(nodeUrl) {
        this.nodeUrl = nodeUrl;
    }

    async getBalance(walletAddress) {
        const response = await axios.get(`${this.nodeUrl}/wallet/balance`);
        return response.data.balance + " NXA";
    }

    async sendTransaction(sender, receiver, amount) {
        const response = await axios.post(`${this.nodeUrl}/wallet/send`, {
            sender,
            receiver,
            amount
        });
        return response.data;
    }
}

module.exports = NexaSDK;
