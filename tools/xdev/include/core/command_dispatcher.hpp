#pragma once

#include <string>

class CommandDispatcher
{
public:
    // Parses command-line arguments and dispatches commands
    static int Dispatch(int argc, char* argv[]);

private:
    // Individual command handlers
    static int HandleDoctor();
    static int HandleSetup();
    static int HandleBuild();
    static int HandleRun();
    static int HandleHelp();
    static int HandleVersion();

    // Utilities
    static void PrintUnknownCommand(const std::string& command);
};