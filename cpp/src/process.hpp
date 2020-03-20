#pragma once
#include <optional>
#include <vector>
#include <string>

namespace process {
  std::vector<std::pair<std::string, float>>
  extract(std::string query, std::vector<std::string> choices, size_t limit = 5, uint8_t score_cutoff = 0);

  std::optional<std::pair<std::string, float>>
  extract_one(std::string query, std::vector<std::string> choices, uint8_t score_cutoff = 0);
}

