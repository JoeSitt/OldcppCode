#ifndef PVE_H
#define PVE_H
#include <stdexcept>
class PreconditionViolationException : public std::runtime_error{
public:
  PreconditionViolationException(const char* message);
};
#endif
