const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#080606", /* black   */
  [1] = "#6B6966", /* red     */
  [2] = "#940809", /* green   */
  [3] = "#A90101", /* yellow  */
  [4] = "#A55453", /* blue    */
  [5] = "#91817F", /* magenta */
  [6] = "#9A9493", /* cyan    */
  [7] = "#d1d1d1", /* white   */

  /* 8 bright colors */
  [8]  = "#929292",  /* black   */
  [9]  = "#6B6966",  /* red     */
  [10] = "#940809", /* green   */
  [11] = "#A90101", /* yellow  */
  [12] = "#A55453", /* blue    */
  [13] = "#91817F", /* magenta */
  [14] = "#9A9493", /* cyan    */
  [15] = "#d1d1d1", /* white   */

  /* special colors */
  [256] = "#080606", /* background */
  [257] = "#d1d1d1", /* foreground */
  [258] = "#d1d1d1",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
