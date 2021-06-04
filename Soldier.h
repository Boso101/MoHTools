#pragma once
#include "Team.h"
#define SOLDIER_SIZE 0xA640



struct Soldier
{
  int unknownPointer 
  int unknownPointer1;
  int unkownPointer2;
  int unkownPointer3;
  Variables* variables; //0x0C Variable Pointer to health and stuff
  int unknown1;
  int unknown2;
  int unknown3;
  int unknown4;
  int unknownPointer5;
  int unknownPointer6;
  int unknown5;
  int unknown6;
  Team currentTeam; //0x30 // Just one byte
  int unknown7;
  char padding_0x2D90[0x2D90];
 //For now just use float for each
  float xPos;
  float yPos;
  float zPos;
  
  
};
