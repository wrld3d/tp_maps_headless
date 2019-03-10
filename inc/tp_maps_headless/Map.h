#ifndef tp_maps_headless_Map_h
#define tp_maps_headless_Map_h

#include "tp_maps_headless/Globals.h"

#include "tp_maps/Map.h"

namespace tp_maps_headless
{

//##################################################################################################
class TP_MAPS_HEADLESS_SHARED_EXPORT Map : public tp_maps::Map
{
public:
  //################################################################################################
  Map(bool enableDepthBuffer = true);

  //################################################################################################
  ~Map() override;

  //################################################################################################
  void makeCurrent() override;

  //################################################################################################
  void update() override;

private:
  struct Private;
  Private* d;
  friend struct Private;
};
}
#endif
