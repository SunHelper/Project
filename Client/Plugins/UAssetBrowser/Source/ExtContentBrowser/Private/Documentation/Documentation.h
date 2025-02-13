// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "Widgets/SWidget.h"
#include "IDocumentationPage.h"
#include "IDocumentation.h"
#include "DocumentationRedirectRegistry.h"

#include "DocumentationDefines.h"

template< typename ObjectType > class TAttribute;

namespace EXT_DOC_NAMESPACE
{

class FExtDocumentation : public IDocumentation
{
public:

	static TSharedRef< IDocumentation > Create();

public:

	virtual ~FExtDocumentation();

	virtual bool OpenHome(FDocumentationSourceInfo Source = FDocumentationSourceInfo(), const FString& BaseUrlId = FString()) const override;

	virtual bool OpenHome(const FCultureRef& Culture, FDocumentationSourceInfo Source = FDocumentationSourceInfo(), const FString& BaseUrlId = FString()) const override;

	virtual bool OpenAPIHome(FDocumentationSourceInfo Source = FDocumentationSourceInfo()) const override;

	virtual bool Open(const FString& Link, FDocumentationSourceInfo Source = FDocumentationSourceInfo(), const FString& BaseUrlId = FString()) const override;

	virtual bool Open(const FString& Link, const FCultureRef& Culture, FDocumentationSourceInfo Source = FDocumentationSourceInfo(), const FString& BaseUrlId = FString()) const override;

	virtual TSharedRef< class SWidget > CreateAnchor(const TAttribute<FString>& Link, const FString& PreviewLink = FString(), const FString& PreviewExcerptName = FString(), const TAttribute<FString>& BaseUrlId = FString()) const override;

	virtual TSharedRef< IDocumentationPage > GetPage( const FString& Link, const TSharedPtr< FParserConfiguration >& Config, const FDocumentationStyle& Style = FDocumentationStyle() ) override;

	virtual bool PageExists(const FString& Link) const override;

	virtual bool PageExists(const FString& Link, const FCultureRef& Culture) const override;

	virtual const TArray < FString >& GetSourcePaths() const override;

	virtual TSharedRef< class SToolTip > CreateToolTip( const TAttribute<FText>& Text, const TSharedPtr<SWidget>& OverrideContent, const FString& Link, const FString& ExcerptName) const override;
	
	virtual TSharedRef< class SToolTip > CreateToolTip(const TAttribute<FText>& Text, const TSharedRef<SWidget>& OverrideContent, const TSharedPtr<SVerticalBox>& DocVerticalBox, const FString& Link, const FString& ExcerptName) const override;

	virtual bool RegisterBaseUrl(const FString& Id, const FString& Url) override;

	virtual FString GetBaseUrl(const FString& Id) const override;

	virtual bool RegisterRedirect(const FName& Owner, const FDocumentationRedirect& Redirect) override;

	virtual void UnregisterRedirects(const FName& Owner) override;

private:

	FExtDocumentation();

private:

	TMap< FString, TWeakPtr< IDocumentationPage > > LoadedPages;

	TMap< const FString, const FString > RegisteredBaseUrls;

	FExtDocumentationRedirectRegistry RedirectRegistry;

	TArray < FString > SourcePaths;
};

}