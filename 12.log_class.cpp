#include <iostream>

class Log
{
public:
    const int LogLevelError = 0;
    const int LogLevelWarning = 1;
    const int LogLevelInfo = 2;
// we can use enum instead
    // enum Level
    // {
    //     Error, Warning, Info
    // };
private:
    int m_LogLevel = LogLevelInfo;  // m here is like a convention for class private member
    // Level m_LogLevel = Info; // using enum
public:
    void SetLevel(int level)
    {
        m_LogLevel = level;
    }
    void Warn(const char* message)
    {
        if (m_LogLevel >= LogLevelWarning)
            std::cout << "[Warning]:" << message << std::endl;
    }
    void Error(const char* message)
    {
        if (m_LogLevel >= LogLevelError)
            std::cout << "[Error ]:" << message << std::endl;
    }
    void Info(const char* message)
    {
        if (m_LogLevel >= LogLevelInfo)
            std::cout << "[Info]:" << message << std::endl;
    }
};

int main()
{ 
    Log log;
    log.SetLevel(log.LogLevelWarning); // if we use enum we can do this: log.SetLevel(Log::Warning)
    log.Warn("Warning!");
    std::cin.get();
}

