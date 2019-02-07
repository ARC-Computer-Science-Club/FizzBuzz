#ifndef ZZ_H
#define ZZ_H
#include <string>

class ZZ {
  private:
    std::string response;
  public:
    ZZ();
    virtual bool isWorthy(int) = 0;
    std::string getResponse();
    void unshiftResponse(std::string);
};

#endif