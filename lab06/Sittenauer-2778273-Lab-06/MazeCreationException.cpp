#include "MazeCreationException.h"

/**
* @post Creates an exception with the message
*/
MazeCreationException::MazeCreationException(const char* message):std::runtime_error(message){
}
