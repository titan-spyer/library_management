#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <string>
#include <vector>
#include <algorithm>

namespace py = pybind11;

// Helper function covert string to lower and check if query inside the title.
bool is_match(std::string query, std::string title) {
    // Convert Both to lowercase for case insensitive search.
    std::transform(query.begin(), query.end(), query.begin(), ::tolower);
    std::transform(title.begin(), title.end(), title.begin(), ::tolower);

    // .find() returns std::string::npos if it DOES NOT find the query
    return title.find(query) != std::string::npos;
}

// FUNCTION 2: The Main Processor
std::vector<int> search_titles(std::string query, std::vector<std::string> title) {
    std::vector<int> matched_indices;

    for (int i = 0; i < title.size(); i++) {
        if (is_match(query, title[i])) {
            matched_indices.push_back(i);
        }
    }
    return matched_indices;
}

// FUNCTION 3: The Python Bridge
// Behavior: This tells the C++ compiler to expose `search_titles` to Python.
PYBIND11_MODULE(library_search, m) {
    m.doc() = "C++ Optimized Search Algorithm for Library";
    m.def("find_matches", &search_titles, "Find matching Book indices fast");
}