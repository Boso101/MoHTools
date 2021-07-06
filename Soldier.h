#pragma once
#include "Team.h"
#include "CollisionFlags.h"
#define SOLDIER_SIZE 0xA640



struct Soldier
{
//  int unknownPointer 
//  int unknownPointer1;
//  int unkownPointer2;
//  int unkownPointer3;
//  Variables* variables; //0x0C Variable Pointer to health and stuff
 // int unknown1;
//  int unknown2;
//  int unknown3;
//  int unknown4;
  int unknownPointer5; // 0x00
  int unknownPointer6; // 0x04
  int unknown5; // 0x08
  int unknown6; //0x0C
  Team currentTeam; //0x30 // Just one byte controls what the AI counts as friends and enemies // or 0x10
  int unknown7;
  char padding_0x2D90[0x2D90]; // We use this so we can just instantly offset to our coordinate offset because the struct seems so damn big
 //For now just use float for each
  float xPos;
  float yPos;
  float zPos;
  int unknown8;
  int unknown9;
  int unknown10;
  CollisionFlags collisionFlag; // 0x2DB4 // Controls what this soldier does when bumping into others with this variable (also controls if this soldiers bullets can damage them)
  
  
  
};
