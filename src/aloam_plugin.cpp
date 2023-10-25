#include <mrs_uav_state_estimators/estimators/state/state_generic.h>

namespace aloam
{

const char estimator_name[] = "aloam";
const bool is_core_plugin = false;

class Aloam : public mrs_uav_state_estimators::StateGeneric {
public:
  Aloam() : mrs_uav_state_estimators::StateGeneric(estimator_name, is_core_plugin) {
  }

  ~Aloam(void) {
  }
};

}  // namespace aloam

#include <pluginlib/class_list_macros.h>
PLUGINLIB_EXPORT_CLASS(aloam::Aloam, mrs_uav_managers::StateEstimator)

