//
//  FlexibleContentSizeCell.h
//  TableViewCellFlexibleContentSize
//
//  Created by Nattapon on 2/28/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface FlexibleContentSizeCell : UITableViewCell {
	UITextView *textView;
}

@property (nonatomic, retain) IBOutlet UITextView *textView;
@property (nonatomic, retain) NSString *contentText;
@property (nonatomic, readonly) CGFloat contentTextHeight;

@end
