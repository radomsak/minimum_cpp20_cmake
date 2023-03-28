
#include <iostream>
#include <span>
#include <vector>

#include <boost/regex.hpp>
#include <opencv2/opencv.hpp>

int main() {
  std::cout << "Hello!" << std::endl;

  // In theory this should print 202002L, but 201709 also seems to be fine
  std::cout << "C++ version used: " << __cplusplus << std::endl;

  std::vector<int> vector(5, 5);
  std::span<int> span(vector);
  std::cout << "std::span works! " << span.size() << std::endl;

  static const boost::regex regex("<(From )?([A-Za-z0-9_]+)>(.*?)");
  std::cout << "Boost regex works! " << regex.size() << std::endl;

  const auto mat = cv::Mat::zeros(2,2, CV_8UC1);
  std::cout << "OpenCV works! " << mat.size() << std::endl;

  return 0;
}