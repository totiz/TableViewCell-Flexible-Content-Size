//
//  RootViewController.h
//  TableViewCellFlexibleContentSize
//
//  Created by Nattapon on 2/28/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FlexibleContentSizeCell.h"

@interface RootViewController : UITableViewController {
	NSMutableArray *myArray;
	
	FlexibleContentSizeCell *tmpCell;
	// referring to our xib-based UITableViewCell ('IndividualSubviewsBasedApplicationCell')
	UINib *cellNib;
	
	// for checking content size of tableViewCell
	FlexibleContentSizeCell *cellForCheckingContentSize;
}

@property (nonatomic, retain) IBOutlet FlexibleContentSizeCell *tmpCell;
@property (nonatomic, retain) UINib *cellNib;
@property (nonatomic, retain) FlexibleContentSizeCell *cellForCheckingContentSize;

@end
