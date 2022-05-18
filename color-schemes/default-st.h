const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#000000", /* black   */
  [1] = "#66B1FA", /* red     */
  [2] = "#6FC7FD", /* green   */
  [3] = "#9B999E", /* yellow  */
  [4] = "#E3C8B5", /* blue    */
  [5] = "#A0ADE5", /* magenta */
  [6] = "#8FCEFE", /* cyan    */
  [7] = "#cee4f5", /* white   */

  /* 8 bright colors */
  [8]  = "#909fab",  /* black   */
  [9]  = "#66B1FA",  /* red     */
  [10] = "#6FC7FD", /* green   */
  [11] = "#9B999E", /* yellow  */
  [12] = "#E3C8B5", /* blue    */
  [13] = "#A0ADE5", /* magenta */
  [14] = "#8FCEFE", /* cyan    */
  [15] = "#cee4f5", /* white   */

  /* special colors */
  [256] = "#000000", /* background */
  [257] = "#cee4f5", /* foreground */
  [258] = "#cee4f5",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
