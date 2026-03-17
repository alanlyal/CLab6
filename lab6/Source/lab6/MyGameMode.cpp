#include "MyGameMode.h"
#include "MyPawn.h"

AMyGameMode::AMyGameMode()
{
    // Set default pawn class
    DefaultPawnClass = AMyPawn::StaticClass();
}
