//
//  GRRequest.h
//  GoldRaccoon
//
//  Created by Valentin Radu on 8/23/11.
//  Copyright 2011 Valentin Radu. All rights reserved.
//
//  Modified and/or redesigned by Lloyd Sargent to be ARC compliant.
//  Copyright 2012 Lloyd Sargent. All rights reserved.
//
//  Modified and redesigned by Alberto De Bortoli.
//  Copyright 2013 Alberto De Bortoli. All rights reserved.
//

#import "GRRequestProtocol.h"
#import "GRError.h"
#import "GRStreamInfo.h"

@class GRRequest;
@class GRDownloadRequest;
@class GRUploadRequest;

@interface GRRequest : NSObject <NSStreamDelegate, GRRequestProtocol>
{
    NSString *_path;
}

@property (nonatomic, weak) id <GRRequestDelegate> delegate;
@property (nonatomic, weak) id <GRRequestDataSource> dataSource;

- (instancetype)initWithDelegate:(id<GRRequestDelegate>)aDelegate datasource:(id<GRRequestDataSource>)aDatasource;

@end
