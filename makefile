run_cpp:
	g++ -o ./bin/Out ./main.cpp -O2 && ./bin/Out
run_cpp_clang:
	clang++ -o ./bin/Out -O2 ./main.cpp && ./bin/Out