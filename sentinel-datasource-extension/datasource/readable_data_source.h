#pragma once

#include "absl/types/optional.h"

#include "sentinel-core/property/sentinel_property.h"

#include <memory>
#include <string>

namespace Sentinel {
namespace DataSource {

template <typename S, typename T>
class ReadableDataSource {
 public:
  virtual ~ReadableDataSource() = default;
  virtual absl::optional<T> LoadConfig() = 0;
  virtual S ReadSource() = 0;
  virtual Property::SentinelPropertySharedPtr<T> GetProperty() = 0;
};

}  // namespace DataSource
}  // namespace Sentinel
