#include "ZZ.h"

/*
  Constructor for ZZ class. Sets response to "zz".
*/
ZZ::ZZ() {
  response = "zz";
}

/*
  Getter function for response.
  @return: string of this->response.
*/
std::string ZZ::getResponse() {
    return this->response;
}

/*
  inserts a string to the begining of response.
  @parameter: string response which will be inserted at the begining of this->response.
*/
void ZZ::unshiftResponse(std::string response) {
  this->response = response + this->response;
}
//test push
