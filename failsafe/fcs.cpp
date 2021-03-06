#include "fcs.h"

Fcs::~Fcs()
{
  servo1.detach();
  servo2.detach();
  servo3.detach();
  servo4.detach();
}

void Fcs::connect()
{
  servo1.attach(1);
  servo2.attach(2);
  servo3.attach(3);
  servo4.attach(4);

  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
}

boolean Fcs::connected()
{
  if (servo1.attached() && servo2.attached() && servo3.attached() && servo4.attached())
    return true;
  else return false;
}

void Fcs::hold()
{
  return; // Todo
}

void Fcs::ditch()
{
  servo1.write(180);
  servo2.write(180);
  servo3.write(180);
  servo4.write(180);
}


