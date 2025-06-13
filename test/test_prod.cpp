#include <gtest/gtest.h>
#include "Prod.h"

TEST(ProdTest, HandlesPositiveInput)
{
int result = prod(2, 3);

EXPECT_EQ(result, 6);
}

TEST(ProdTest, HandlesNegativeInput)
{
int result = prod(2, -3);

EXPECT_EQ(result, -6);
}

TEST(ProdTest, HandlesNegativeInputPositiveOutput)
{
int result = prod(-2, -3);

EXPECT_EQ(result, 6);
}
