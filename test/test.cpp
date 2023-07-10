#include <gtest/gtest.h>

extern "C" {
#include "gpa.h"

struct person the_person;
}

// This class definition is required by Google Test.
// See the documentation for further details.
class compare_gpa_test : public ::testing::Test {
 protected:
  // Constructor runs before each test
  compare_gpa_test() {}
  // Destructor cleans up after tests
  virtual ~compare_gpa_test() {}
  // Sets up before each test (after constructor)
  virtual void SetUp() {}
  // Clean up after each test (before destructor)
  virtual void TearDown() {}
};

TEST(compare_gpa_test, causality_holds) {
  EXPECT_TRUE(1) << "Kudos if you can actually trigger this message\n";
  EXPECT_FALSE(0) << "Kudos if you can actually trigger this message\n";
}


int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
