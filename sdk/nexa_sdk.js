const axios = require("axios");

class NexaSDK {
    constructor(nodeUrl) {
        this.nodeUrl = nodeUrl;
    }

    async getLatestBlock() {
        const response = await axios.get(`${
