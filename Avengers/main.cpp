#include "game.h"
#include <fstream>

using namespace ruben;

int main(int argc, char *argv[])
{
    (void)argc;
    game(atoi(argv[2]), argv[1]);
    return 0;
}
