/*
	Copyright 2009-2012, Sumeet Chhetri 
  
    Licensed under the Apache License, Version 2.0 (the "License"); 
    you may not use this file except in compliance with the License. 
    You may obtain a copy of the License at 
  
        http://www.apache.org/licenses/LICENSE-2.0 
  
    Unless required by applicable law or agreed to in writing, software 
    distributed under the License is distributed on an "AS IS" BASIS, 
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. 
    See the License for the specific language governing permissions and 
    limitations under the License.  
*/
/*
 * Destination.cpp
 *
 *  Created on: Sep 21, 2009
 *      Author: sumeet
 */

#include "Destination.h"

Destination::Destination() {
	// TODO Auto-generated constructor stub

}

Destination::~Destination() {
	// TODO Auto-generated destructor stub
}

string Destination::getName() const
{
	return this->name;
}

void Destination::setName(string name)
{
	this->name = name;
}

string Destination::getType() const
{
	return this->type;
}

void Destination::setType(string type)
{
	this->type = type;
}
