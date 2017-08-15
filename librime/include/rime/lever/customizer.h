//
// Copyright RIME Developers
// Distributed under the BSD License
//
// 2012-02-12 GONG Chen <chen.sst@gmail.com>
//
#ifndef RIME_CUSTOMIZER_H_
#define RIME_CUSTOMIZER_H_

#include <boost/filesystem.hpp>

namespace rime {

class Customizer {
 public:
  Customizer(const boost::filesystem::path& source_path,
             const boost::filesystem::path& dest_path,
             const string& version_key)
      : source_path_(source_path),
        dest_path_(dest_path),
        version_key_(version_key) {}

  bool UpdateConfigFile();

 protected:
  boost::filesystem::path source_path_;
  boost::filesystem::path dest_path_;
  string version_key_;
};

}  // namespace rime

#endif  // RIME_CUSTOMIZER_H_
