#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlayerFollower.generated.h"

UCLASS()
class WOUND_API APlayerFollower : public AActor{
	GENERATED_BODY()
private:
	UPROPERTY(EditAnywhere, Category="Following")
	FVector FollowOffset;
public:	
	APlayerFollower();

	virtual void Tick(float DeltaTime) override;
};
