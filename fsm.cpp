#include <iostream>
#include <vector>
#include <functional>
#include <chrono>
#include <thread>

// Define the state transition functions
int state0() {
    return 1;
}

int state1() {
    return 2;
}

int state2() {
    return 0;
}

class FSM {
private:
    int currentState;
    std::vector<std::function<int()>> handlers;

public:
    FSM(const std::vector<std::function<int()>>& handlers) : currentState(0), handlers(handlers) {}

    void next() {
        // Call the handler for the current state, which returns the next state
        currentState = handlers[currentState]();
    }

    void printCurrentState() {
        std::cout << "Current state: " << currentState << std::endl;
    }
};

void runFSM(FSM& fsm, int iterations) {
    for(int i = 0; i < iterations; ++i) {
        fsm.printCurrentState();
        fsm.next();
    }
}

void runFSM(FSM& fsm, std::chrono::seconds duration) {
    auto start = std::chrono::high_resolution_clock::now();
    while(std::chrono::high_resolution_clock::now() - start < duration) {
        fsm.printCurrentState();
        fsm.next();
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}

int main() {
    // Create a vector of handler functions
    std::vector<std::function<int()>> handlers = {state0, state1, state2};

    // Create an FSM with the handlers
    FSM fsm(handlers);

    // Run the FSM for 5 iterations
    const uint64_t numIterations = 5;
    std::cout << "Running FSM " << numIterations << " times" << "\n";
    std::cout <<"---------------------------------------" << "\n";
    runFSM(fsm, 5);
    std::cout <<"---------------------------------------" << "\n";

    // Run the FSM for 5 seconds
    const std::chrono::seconds numSeconds(10);
    std::cout << "Running FSM for " << numSeconds.count() << " seconds\n";
    std::cout <<"---------------------------------------" << "\n";
    runFSM(fsm, std::chrono::seconds(numSeconds.count()));
    std::cout <<"---------------------------------------" << "\n";

    return 0;
}
