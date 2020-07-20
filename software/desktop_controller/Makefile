TARGET 		= App

CXX			= clang++
CXXFLAGS	= -std=c++1z -Wall -Wextra
LD			= clang++ -o 
LDFLAGS		= -Wall -pedantic

SRCDIR 		= src
OBJDIR 		= obj
BINDIR 		= bin

SOURCES 	= $(wildcard $(SRCDIR)/*.cpp) #src/main.cpp src/app.cpp src/app_state.cpp
INCLUDES	= $(wildcard $(SCRDIR)/*.h)
OBJECTS 	= $(SOURCES:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o) #bin/main.o bin/app.o bin/app_state.o

RM			= rm -f

$(BINDIR)/$(TARGET): $(OBJECTS)
	@$(LD) $@ $(LDFLAGS) $(OBJECTS)
	@echo "Linking complete!"

$(OBJECTS): $(OBJDIR)/%.o : $(SRCDIR)/%.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@
	@echo "Compiled "$<" successfully!"

.PHONY: clean
clean:
	@$(RM) $(OBJECTS)
	@echo "Cleanup Complete!"