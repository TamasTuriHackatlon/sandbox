//#pragma once //Header guard
//
//void Log(const char* message);
//void InitLog();
//class Player {}; //Class or Struct objects shall not be redefined twice, this will cause an error

#ifndef _LOG_H//Header guard in an old way, before pragma once was introduced. It checks if _LOG_H was defined before (with the #define command). So it prevents double definition.
#define _LOG_H

void Log(const char* message);
void InitLog();
class Player {};

#endif