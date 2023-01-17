CXXFLAGS = -std=c++11 -Wall -Wpedantic

SRC = main
EXE = mg_ctof
default-target: $(EXE)

$(EXE): $(SRC).cpp
	$(CXX) $(CXXFLAGS) -o $@ $^
