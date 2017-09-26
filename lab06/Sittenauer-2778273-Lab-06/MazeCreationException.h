#ifndef MCE_H
#define MCE_H
#include <stdexcept>
class MazeCreationException: public std::runtime_error{
public:
/**
* @post Creates an exception with the message
*/
MazeCreationException(const char* message);
};
#endif
