//
//  BookS.h
//  BookReader
//
//  Created by Dmitriy Remezov on 21.10.13.
//  Copyright (c) 2013 Dmitriy Remezov. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Author, Part, PublishHouse;

@interface BookS : NSManagedObject

@property (nonatomic, retain) NSString * genre;
@property (nonatomic, retain) id image;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSNumber * year;
@property (nonatomic, retain) NSSet *autho;
@property (nonatomic, retain) NSSet *part;
@property (nonatomic, retain) PublishHouse *booktopb;
@end

@interface BookS (CoreDataGeneratedAccessors)

- (void)addAuthoObject:(Author *)value;
- (void)removeAuthoObject:(Author *)value;
- (void)addAutho:(NSSet *)values;
- (void)removeAutho:(NSSet *)values;

- (void)addPartObject:(Part *)value;
- (void)removePartObject:(Part *)value;
- (void)addPart:(NSSet *)values;
- (void)removePart:(NSSet *)values;

@end
