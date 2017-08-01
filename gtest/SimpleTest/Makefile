test:test.cpp 
	g++ -o $@ $^ -I ~/gtest/third_part/include -L ~/gtest/third_part/lib/ -lgtest -lgtest_main -lpthread
#如果自己写main函数则不需要加-lgtest_main
.PHONY:clean
clean:
	rm -f test
