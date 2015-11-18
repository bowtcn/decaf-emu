#pragma once
#include "types.h"

namespace gpu
{

class Driver
{
public:
   virtual ~Driver() { }

   virtual void start() = 0;
   virtual void setupWindow() = 0;
   virtual void setTvDisplay(size_t width, size_t height) = 0;
   virtual void setDrcDisplay(size_t width, size_t height) = 0;
};

namespace driver
{

void
create(Driver *driver);

void
start();

void
destroy();

void
setupWindow();

void
setTvDisplay(size_t width, size_t height);

void
setDrcDisplay(size_t width, size_t height);

} // namespace driver

} // namespace gpu
