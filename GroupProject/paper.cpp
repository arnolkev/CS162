/*********************************************************************
 ** Author: Group 18
 ** Date: 2/26/2017
 ** Description: paper.cpp is the Paper class implementation file.
 *********************************************************************/
#include "paper.hpp"

/*********************************************************************
 ** Description: default constructor
 *********************************************************************/
Paper::Paper()
{
    strength = 1;
    type = 'p';
}

/*********************************************************************
 ** Description: 1 parameter  constructor that sets strength
 ** Parameter: int
 *********************************************************************/
Paper::Paper(int str)
{
    strength = str;
    type = 'p';
}

/*********************************************************************
 ** Description: default destructor
 *********************************************************************/
Paper::~Paper(){}

/*********************************************************************
 ** Description: Compare Tool Strengths
 ** Parameter: Tool Object Pointer
 ** Returns: bool
 *********************************************************************/
bool Paper::fight(Tool* tool)
{
    if (tool.getType == s)
{
	if((strength / 2 ) > tool.getStrength)
	{
		return true;
	}
	
	else
	{
		return false;
	}

}

if (tool.getType == p )
{
	
		return false;
	

}

if (tool.getType == r)
{
	if((strength * 2 ) > tool.getStrength)
	{
		return true;
	}
	
	else
	{
		return false;
	}

}

    
}
}
