//
//  BookS.h
//  BookReader
//
//  Created by Dmitriy Remezov on 08.10.13.
//  Copyright (c) 2013 Dmitriy Remezov. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Author;

@interface BookS : NSManagedObject

@property (nonatomic, retain) NSDate * image;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSNumber * year;
@property (nonatomic, retain) NSSet *autho;
@property (nonatomic, retain) NSSet *genr;
@property (nonatomic, retain) NSSet *part;
@end

@interface BookS (CoreDataGeneratedAccessors)

- (void)addAuthoObject:(Author *)value;
- (void)removeAuthoObject:(Author *)value;
- (void)addAutho:(NSSet *)values;
- (void)removeAutho:(NSSet *)values;

- (void)addGenrObject:(NSManagedObject *)value;
- (void)removeGenrObject:(NSManagedObject *)value;
- (void)addGenr:(NSSet *)values;
- (void)removeGenr:(NSSet *)values;

- (void)addPartObject:(NSManagedObject *)value;
- (void)removePartObject:(NSManagedObject *)value;
- (void)addPart:(NSSet *)values;
- (void)removePart:(NSSet *)values;

@end
