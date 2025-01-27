#include "config.h"

namespace Config {
namespace OTAHandler {
const char *credentials[num_networks][2] = {{WIFI_SSID1, WIFI_PASSWORD2},
  {WIFI_SSID2, WIFI_PASSWORD2}, {WIFI_SSID3, WIFI_PASSWORD3}};
const char *hostname = "RemoteOTA";
}  // namespace OTAHandler
}  // namespace Config