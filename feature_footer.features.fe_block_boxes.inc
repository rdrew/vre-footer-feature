<?php
/**
 * @file
 * feature_footer.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function feature_footer_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'footer 1';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'upei_footer1';
  $fe_block_boxes->body = '<div class="footer-links bottom-links menu-01 bl-first">
  <h2 class="title">About UPEI</h2>
  <ul class="menu">
    <li class="leaf first"><a href="http://home.upei.ca/about-upei/history" title="">History</a></li>
    <li class="leaf"><a href="http://home.upei.ca/about-upei/mission-and-goals" title="">Mission</a></li>
    <li class="leaf"><a href="http://home.upei.ca/about-upei/governance" title="">Governance</a></li>
    <li class="leaf"><a href="http://upei.ca/president" title="">President</a></li>
    <li class="leaf"><a href="http://hr.upei.ca/career-opportunities" title="">Employment</a></li>
    <li class="leaf"><a href="http://www.upei.ca/campuslogin" title="">Campus Login</a></li>
		<li class="leaf"><a href="http://www.upei.ca/map" title="">Campus Map</a></li>
  </ul>
</div>';

  $export['upei_footer1'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'footer 2';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'upei_footer2';
  $fe_block_boxes->body = '<div class="footer-links bottom-links menu-02">
  <h2 class="title">Academics</h2>
  <ul class="menu">
    <li class="leaf first"><a href="http://arts.upei.ca/" title="">Arts</a></li>
    <li class="leaf"><a href="http://education.upei.ca/" title="">Education</a></li>
    <li class="leaf"><a href="http://science.upei.ca/" title="">Science</a></li>
    <li class="leaf"><a href="http://avc.upei.ca/" title="">Veterinary Medicine</a></li>
    <li class="leaf"><a href="http://business.upei.ca/" title="">Business</a></li>
    <li class="leaf"><a href="http://nursing.upei.ca/" title="">Nursing</a></li>
    <li class="leaf"><a href="http://lifelonglearning.upei.ca/" title="">Continuing Education</a></li>
  </ul>
</div>';

  $export['upei_footer2'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'footer 3';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'upei_footer3';
  $fe_block_boxes->body = '<div class="footer-links bottom-links menu-03">
  <h2 class="title">Current Students</h2>
  <ul class="menu">
    <li class="leaf first"><a href="http://ar.upei.ca" title="">Athletics / Recreation</a></li>
    <li class="leaf"><a href="http://www.upei.ca/studentlife/timetables" title="">Official Timetable</a></li>
    <li class="leaf"><a href="http://upei.ca/studentlife/student-affairs" title="">Student Affairs</a></li>
    <li class="leaf"><a href="http://moodle.upei.ca" title="">Moodle @ UPEI</a></li>
    <li class="leaf"><a href="http://library.upei.ca" title="">Library</a></li>
    <li class="leaf"><a href="http://mymail.upei.ca" title="">Student Email</a></li>
    <li class="leaf"><a href="http://bookstore.upei.ca/" title="">Bookstore</a></li>
  </ul>
</div>';

  $export['upei_footer3'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'footer 4';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'upei_footer4';
  $fe_block_boxes->body = '<div class="footer-links bottom-links menu-04">
  <h2 class="title">Apply to UPEI</h2>
  <ul class="menu">
    <li class="leaf first"><a href="http://students.upei.ca" title="">Why UPEI?</a></li>
    <li class="leaf"><a href="http://upei.ca/map" title="">Getting to UPEI</a></li>
    <li class="leaf"><a href="http://www.upei.ca/studentlife/first-year-advisement" title="">First Year Advisement</a></li>
    <li class="leaf"><a href="http://www.upei.ca/studentlife/registrar/financial-aid" title="">Financial Aid</a></li>
    <li class="leaf"><a href="http://upei.ca/scholarships" title="">Scholarships</a></li>
    <li class="leaf"><a href="http://home.upei.ca/about-upei/visit-the-campus/upei-campus-tour" title="">Schedule a Tour</a></li>
    <li class="leaf"><a href="http://upei.ca/studentlife/residence" title="">UPEI Residence</a></li>
</ul>
</div>
';

  $export['upei_footer4'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'footer 5';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'upei_footer5';
  $fe_block_boxes->body = '<div class="footer-links bottom-links menu-05">
   <h2 class="title">Research</h2>
   <ul class="menu">
       <li class="leaf first"><a href="http://research.upei.ca/blogs/external" title="">Research Blog</a></li>
       <li class="leaf"><a href="http://research.upei.ca/rs" title="">Research Services</a></li>
       <li class="leaf"><a href="http://research.upei.ca/faannouncements" title="">Funding Opportunities</a></li>
       <li class="leaf"><a href="http://research.upei.ca/researcherlist" title="">Find a Researcher</a></li>
       <li class="leaf"><a href="http://threeoaksinnovations.com" title="">Three Oaks Innovations</a></li>
       <li class="leaf"><a href="http://research.upei.ca/forms" title="">Research Forms</a></li>
       <li class="leaf"><a href="http://research.upei.ca/staff" title="">Research Contacts</a></li>
   </ul>
 </div>';

  $export['upei_footer5'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'pre-footer text';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'upei_prefooter';
  $fe_block_boxes->body = 'some text or image can go here';

  $export['upei_prefooter'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'footer address left';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'upei_subfooter_left';
  $fe_block_boxes->body = '<div class="footeraddress">  <div class="addressleft">  <div class="address">  550 University Avenue, Charlottetown  Prince Edward Island, Canada C1A 4P3  </div>  <div class="links-last">  <ul>  <li><a href="http://www.upei.ca/emergency/">Emergency Preparedness</a></li>  <li><a href="http://home.upei.ca/about-upei/publications">Publications</a> </li>  <li><a href="https://cab.upei.ca/privacy-committee">Privacy Policy</a></li>  <li><a href="http://home.upei.ca/disclaimer">Disclaimer</a> </li>  <li><a href="http://home.upei.ca/about-website">About this Website</a> </li>  <li><a href="http://home.upei.ca/directory">Contact UPEI</a></li>  </ul>  </div>  </div>  </div>';

  $export['upei_subfooter_left'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'footer address right';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'upei_subfooter_right';
  $fe_block_boxes->body = '<div id="address_right">
<div class="socialmedia">
							<ul><li><a class="noicon" href="http://facebook.com/UniversityofPEI"><img src="http://files.upei.ca/misc/social/upei_facebook.png"></a></li>
					    <li><a class="noicon" href="http://twitter.com/upei"><img src="http://files.upei.ca/misc/social/upei_twitter.png"></a></li>
					    <li><a class="noicon" href="http://youtube.com/UofPEI"><img src="http://files.upei.ca/misc/social/upei_youtube.png"></a></li>
					  <!--  <li><a class="noicon" href="http://flickr.com/groups/upei"><img src="http://files.upei.ca/misc/social/upei_flickr.png"></a></li><ul> -->
                            <li><a class="noicon" href="http://instagram.com/upei"><img src="http://files.upei.ca/misc/social/upei_instagram.png"></a></li><ul>
				</div>
<div class="footerlogo"><img src="http://files.upei.ca/misc/shieldfooter.png"></div>
</div>';

  $export['upei_subfooter_right'] = $fe_block_boxes;

  return $export;
}
