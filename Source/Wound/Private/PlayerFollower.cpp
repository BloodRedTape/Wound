#include "PlayerFollower.h"

APlayerFollower::APlayerFollower(){
	PrimaryActorTick.bCanEverTick = true;
}

void APlayerFollower::Tick(float DeltaTime){
	Super::Tick(DeltaTime);

	APlayerController *LocalPlayerController = GetWorld()->GetGameInstance()->GetFirstLocalPlayerController();

	FVector TargetLocation = LocalPlayerController->AcknowledgedPawn->GetActorLocation();

	SetActorLocation(TargetLocation + FollowOffset);
}

