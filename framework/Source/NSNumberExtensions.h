/** @category NSNumber(CPTExtensions)
 *  @brief Core Plot extensions to NSNumber.
 **/
@interface NSNumber(CPTExtensions)

+(instancetype)numberWithCGFloat:(CGFloat)number;

@property (NS_NONATOMIC_IOSONLY, readonly) CGFloat cgFloatValue;
-(instancetype)initWithCGFloat:(CGFloat)number;

@property (NS_NONATOMIC_IOSONLY, readonly, copy) NSDecimalNumber *decimalNumber;

@end
