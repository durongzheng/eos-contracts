/*
	this is re-write from openzeppelin safemath library:
	https://github.com/OpenZeppelin/openzeppelin-solidity/blob/master/contracts/math/SafeMath.sol
	
	version info：
		ver:	1.01
		author: durongzheng
		date	2018-5-15
	auth info：
		GPL
*/
#include <eosiolib/eosio.hpp>

using namespace eosio;

namespace PalaceGate {
	class SafeMath : public eosio::contract {
		public:
			SafeMath(account_name self) : eosio::contract(self) {}

			uint64_t safe_mul(const uint64_t &a, const uint64_t &b);
			uint64_t safe_div(const uint64_t &a, const uint64_t &b);
			uint64_t safe_sub(const uint64_t &a, const uint64_t &b);
			uint64_t safe_add(const uint64_t &a, const uint64_t &b);
	};
} ///namespace PalaceGate