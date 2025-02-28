# Nexa-Core Architecture

Nexa-Core is a hybrid **Proof-of-Work (PoW) + Proof-of-Stake (PoS)** blockchain designed for scalability, security, and smart contract execution.

## 🏗️ Core Components
- **Blockchain Layer** → Stores transactions & blocks
- **Consensus Layer** → PoW for mining, PoS for staking
- **Networking Layer** → P2P communication across nodes
- **Transaction System** → UTXO-based payments
- **Smart Contract Execution** → dApp support via Layer-2 EVM
- **API & Wallet System** → Interact with blockchain from web & mobile apps

## 🔗 Technical Stack
| Component           | Technology Used |
|---------------------|----------------|
| **Programming**    | C++, Go, Rust   |
| **Consensus**      | Hybrid PoW + PoS |
| **Storage**        | RocksDB, PostgreSQL |
| **P2P Networking** | LibP2P (Go-based) |
| **Smart Contracts** | Layer-2 EVM-compatible |
| **Wallet**         | Web3.js + Flutter |

## 🔥 Why Nexa?
- ✅ **Faster Transactions** (~1-2 min block time)
- ✅ **Scalable** (Dynamic block size)
- ✅ **Developer-Friendly** (Full API & dApp support)
- ✅ **Low Fees** (Efficient UTXO model)
