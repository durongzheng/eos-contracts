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
#include <safemath.hpp>

using namespace eosio;

namespace PalaceGate {
	uint64_t SafeMath::safe_mul(const uint64_t &a, const uint64_t& b){
		if(a==0) return 0;
		uint64_t c = a * b;
		eosio_assert( c / a == b, "multiply overflow.");
		return c;
	}
	
	uint64_t SafeMath::safe_div(const uint64_t &a, const uint64_t &b){
		eosio_assert(b > 0,"div must > 0");
		return a / b;
	}
	
	uint64_t SafeMath::safe_sub(const uint64_t &a, const uint64_t &b){
		eosio_assert(a >= b, "subtract overflow.");
		return a - b;
	}
	
	uint64_t SafeMath::safe_add(const uint64_t &a, const uint64_t &b){
		uint64_t c = a + b;
		eosio_assert(c >= a, "add overflow.");
		return c;
	}
} /// namespace PalaceGate