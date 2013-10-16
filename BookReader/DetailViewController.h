//
//  DetailViewController.h
//  BookReader
//
//  Created by Dmitriy Remezov on 16.09.13.
//  Copyright (c) 2013 Dmitriy Remezov. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MasterViewController.h"
#import "AddPartViewController.h"
#import "BookS.h"
#import "PartViewController.h"


@interface DetailViewController : UIViewController <UISplitViewControllerDelegate, Booking, UITableViewDataSource, UITableViewDelegate>
{
    UIPopoverController *masterPopoverController;
}

@property (weak, nonatomic) IBOutlet UILabel *label;
@property (weak, nonatomic) IBOutlet UINavigationItem *navItem;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *addPartButton;
@property (weak, nonatomic) IBOutlet UIImageView *image;
@property BookS *books;
@property Part *partOfBook;
@property NSString *bookTitle;
@property BOOL *albumMode;

- (IBAction)addPart:(id)sender;

@property (weak, nonatomic) IBOutlet UITableView *partTable;

@end
