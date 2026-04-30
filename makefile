CPP = g++
CXXFLAGS = -std=c++17 -O2 -Wall

.PHONY: run clean help

help:
	@echo "Use: make run FILE=exercicios/neps_academy/entrada_saida/1.cpp"

run:
	$(CPP) $(CXXFLAGS) $(FILE) -o $(basename $(notdir $(FILE)))
	./$(basename $(notdir $(FILE)))

clean:
	del *.exe *.out *.o 2>nul || true