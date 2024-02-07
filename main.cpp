#include <stdio.h>
#include<chrono>
#include <string>
#include<iostream>
int main() {
	std::string str(10000, 'a');
	std::chrono::system_clock::time_point start, end;
	
	
	start = std::chrono::system_clock::now();
	
	std::string result( str);
	end = std::chrono::system_clock::now();

	double elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count(); //処理に要した時間をマイクロ秒に変換
	std::cout << "copy" << " : " << elapsed << std::endl;
	
	
	start = std::chrono::system_clock::now();
	 result = std::move(str);

	end = std::chrono::system_clock::now();

	 elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count(); //処理に要した時間をマイクロ秒に変換
	std::cout << "std::move" << " : " << elapsed << std::endl;

		return 0;
}