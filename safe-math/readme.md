# SafeMath Usage
	SafeMath是为eos智能合约开发而编写的安全计算类,你可以用以下方法使用它.
	新建一个头文件(hello.hpp),按照以下方式定义一个hello合约,它只包含一个test操作:
```cpp
	#include <safemath.hpp>
	
	class hello : public PalaceGate::SafeMath{
		public:
			hello(account_name self) : PalaceGate::SafeMath(self){}
			
			//@abi action
			void test();
	}			
```
	在执行文件中实现say_hi方法：
```cpp
	#include <hello.hpp>
	using namespace eosio;
	
	void hello::test(){
		uint64_t a = 100;
		uint64_t b = 200;
		uint64_t sum = safe_add(a,b);
		eosio::print(a, " + ", b, " = ", sum, "\n");
	}
```
	
