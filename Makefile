main:
	@g++ -o main *.cpp
run: main
	@./main
clean:
	@rm main
