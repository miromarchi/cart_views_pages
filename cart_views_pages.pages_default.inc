<?php
/**
 * @file
 * cart_views_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function cart_views_pages_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'cart_about';
  $page->task = 'page';
  $page->admin_title = 'Cart about';
  $page->admin_description = '';
  $page->path = 'about';
  $page->access = array(
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'About',
    'name' => 'main-menu',
    'weight' => '7',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_cart_about_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'cart_about';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'body-about',
    'css_id' => 'page-about',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'unico';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
      'sidebar' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '975dd1ed-f5dd-4f87-afd0-ee50d1f04d28';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ff7d148c-a9ba-4f06-8287-f457d9a346f5';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'About the project',
      'title' => 'About the project',
      'body' => '<a href="<?php print file_create_url("public://1896-la-belle-dame-sans-merci.jpg"); ?>"><img class="img-responsive pull-right" typeof="foaf:Image" src="<?php print image_style_url("cart_img_square", "public://1896-la-belle-dame-sans-merci.jpg"); ?>" width="220" height="220" alt=""></a>
Cuban Art Worldwide is a project realized in collaboration with the Republic of Cuba Pavilion at the 56th International Art Exhibition, La Biennale di Venezia in order to promote Contemporary Cuban Art and offer an easy-to-use tool to find exhibitions displaying the work of Cuban artists around the world. 

Cuban Art is flourishing inside and outside the island and <strong>tens of exhibitions featuring Cuban artists are on show every day</strong> around the world.
Venues, institutions, associations, artists, foundations share information about their exhibitions through different media (websites, social media, press) but this information is fragmented. We thought it was necessary to create a tool to gather all the important data in one place, just a click away.

As the Republic of Cuba Pavilion at La Biennale di Venezia we are committed to promote the work of Cuban artists.

<blockquote>Cuban Art Worldwide is a tool meant both for art professionals and for general public that aims to become the most complete database recording data about exhibitions featuring the works of Cuban artists worldwide: a place where to find specific events, discover what is on show in your town/state, visualize events on a map or on a calendar or just take a look around.</blockquote>

',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'panel clearfix',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ff7d148c-a9ba-4f06-8287-f457d9a346f5';
    $display->content['new-ff7d148c-a9ba-4f06-8287-f457d9a346f5'] = $pane;
    $display->panels['contentmain'][0] = 'new-ff7d148c-a9ba-4f06-8287-f457d9a346f5';
    $pane = new stdClass();
    $pane->pid = 'new-8e195517-6213-41d6-96fc-8e083398b851';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Team',
      'title' => 'Team / Who we are',
      'body' => '<a href="<?php print file_create_url("public://botticelli_la-primavera.jpg"); ?>"><img class="img-responsive pull-right" typeof="foaf:Image" src="<?php print image_style_url("cart_img_square", "public://botticelli_la-primavera.jpg"); ?>" width="220" height="220" alt=""></a>
Cuban Art Worldwide has been designed and developed by Marta Castellani, with the support  of the Cuban Republic Pavilion at the 56th International Art Exhibition, La Biennale di Venezia and Maretti Editore.
The website was designed and developed in collaboration with Miro Marchi 
Founding supporters include:',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'panel clearfix',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8e195517-6213-41d6-96fc-8e083398b851';
    $display->content['new-8e195517-6213-41d6-96fc-8e083398b851'] = $pane;
    $display->panels['contentmain'][1] = 'new-8e195517-6213-41d6-96fc-8e083398b851';
    $pane = new stdClass();
    $pane->pid = 'new-7c528bee-dda0-4fa3-b525-c1814013e1ea';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Participate',
      'title' => 'Participate',
      'body' => '<a href="<?php print file_create_url("public://venus.jpg"); ?>"><img class="img-responsive pull-right" typeof="foaf:Image" src="<?php print image_style_url("cart_img_square", "public://venus.jpg"); ?>" width="220" height="220" alt=""></a>
Are you interested in getting involved with Cuban Art Worldwide Project?

Here are 6 easy things you can do to help us: 

<h4>1) SIGN UP AND BECOME AN EDITOR!</h4>

We are always looking for new exhibitions to add and we want to offer the more precise and complete information as possible, so if you are involved in Cuban Art as a professional maybe you would like to collaborate with us. 

What can you do as an editor?
<ul>
<li>create new contents</li>
<li>complete information when missing</li>
<li>correct contents</li>
</ul>

If you are interested in collaborate with us as an editor write us an e-mail: cubanartworldwide@gmail.com

<h4>2) ADD YOUR EVENT ON OUR PUBLIC CALENDAR (Cuban Art Calendar)!</h4>
Cuban Art Calendar is a public calendar created with Google Calendar. As every public calendar you can use it to:
<ul>
<li>add an event ( the event will be public so everyone can see and share it with his/her own contacts). </li>
<li>share the calendar on your calendar app and use it as an agenda on your device. </li>
<li>invite people to your event/s</li>
<li>embed the calendar on your own website or share it with your contacts.</li>
</ul>

Every exhibition added to Cuban Art Calendar will automatic appear on the map and calendar of Cuban Art Worldwide page, then our team will edit it and all the information will be published on the website.
Discover more here

<h4>3) SPREAD THE VOICE!</h4>
We want Cuban Art Worldwide to become a complete data base about Cuban Art Exhibits so we need to collect every possible information about events around the world. 

What can you do? Put a like on our facebook page, share our calendar with your contacts, tell a friend...Everything counts!!

<h4>4) VOLUNTEER!</h4>
Wanna be part of an international project? Wanna contribute to promote Cuban Art? Write us, we will be more than happy to have you on board! 

<h4>5) STAY CONNECTED!</h4>
Visit our facebook page and if you like what we do...well, put a like on it!!


<h4>6) TELL US WHAT YOU THINK!</h4>
We want to know what you think, because your opinion matters to us. Do you have any suggestion, advice, critic you want us to know? If you have any comment about what we are doing and how we are doing it please write it to us. Your feedback we\'ll help us to improve the quality of our work.',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'panel clearfix',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '7c528bee-dda0-4fa3-b525-c1814013e1ea';
    $display->content['new-7c528bee-dda0-4fa3-b525-c1814013e1ea'] = $pane;
    $display->panels['contentmain'][2] = 'new-7c528bee-dda0-4fa3-b525-c1814013e1ea';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['cart_about'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'cart_editing';
  $page->task = 'page';
  $page->admin_title = 'Cart editing';
  $page->admin_description = '';
  $page->path = 'editing';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Editing tools',
    'name' => 'user-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_cart_editing_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'cart_editing';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'editing',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'double';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '82f5892b-e42c-4079-85d5-ff3842f4179e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c1f871f1-2a8b-4f5e-906f-542a317644ae';
    $pane->panel = 'one';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-editing';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c1f871f1-2a8b-4f5e-906f-542a317644ae';
    $display->content['new-c1f871f1-2a8b-4f5e-906f-542a317644ae'] = $pane;
    $display->panels['one'][0] = 'new-c1f871f1-2a8b-4f5e-906f-542a317644ae';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['cart_editing'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'cart_home';
  $page->task = 'page';
  $page->admin_title = 'Home page';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_cart_home_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'cart_home';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'middle' => NULL,
      'header' => NULL,
      'one' => NULL,
      'two' => NULL,
      'three' => NULL,
      'four' => NULL,
      'contentmain' => NULL,
      'footer' => NULL,
    ),
    'middle' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '376b0fed-fc18-485d-a31b-70a1a434c2c9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-de7e3c3b-ab9d-4512-ba71-62cc2ac6b9c0';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'front html',
      'title' => '',
      'body' => '	<div class="norow norow-1 clearfix">
        <div class="col-md-6 col-md-offset-3 column text-center">
	        <div class="front-focus">
                <img src="<?php print base_path() . \'sites/default/files/structure/logoexp1.png\';?>" class="front-logo" /><img src="<?php print base_path() . \'sites/default/files/structure/logoexpr1.png\';?>" class="front-logo-r" />
                <h1>
	                CUBAN ART <br />WORLD<span class="invisible-separator"> </span>WIDE
                </h1>
                <p>
                    Discover Cuban art exhibitions on Earth!
                </p>
            </div>
        </div>
    </div>
    <div class="norow norow-2 clearfix">
	    <div class="col-md-3 col-sm-6 column col1 text-center">
	        <h2 class="what">What</h2>
	        <p>We focus on exhibitions as a module to follow Cuban artists\' activity around the world. But, as one wise man said once “Exhibitions pass but catalogues remain”.</p>
	        <div class="tb-rl coloredWhat">{</div>
            <p class="p-links text-center">
                <a class="home-list btn btn-default btn-what" href="directory">Exhibitions</a> <a class="home-list btn btn-default btn-what" href="directory/catalogs">Catalogs</a>
            </p>
	    </div>
	    <div class="col-md-3 col-sm-6 column col2 text-center">
            <h2 class="when">When</h2>
            <p>Everybody needs an agenda! Here you can visualize Cuban art exhibitions on a calendar, look what is on show or upcoming, take a look in the archive... Remember you can <a href="help">add this calendar to your calendar app!</a></p>
	        <div class="tb-rl coloredWhen">{</div>
            <p class="p-links text-center">
                <a class="home-list btn btn-default btn-when" href="calendar">Calendar</a> <a class="home-list btn btn-default btn-when" href="calendar/archive">Archive</a> <a class="home-list btn btn-default btn-when" href="calendar/upcoming">Upcoming</a>
            </p>
	    </div>
	    <div class="col-md-3 col-sm-6 column col3 text-center">
            <h2 class="where">Where</h2>
            <p>Not only a list of venues hosting Cuban art exhibitions but also an interactive world map you can navigate to discover what is going on about Cuban art even on the other side of the Planet!</p>
	        <div class="tb-rl coloredWhere">{</div>
	        <p class="p-links text-center">
                <a class="home-list btn btn-default btn-where" href="directory/venues">Venues</a> <a class="home-list btn btn-default btn-where" href="map">Exhibits map</a> <a class="home-list btn btn-default btn-where" href="map/venues">Venues map</a>
            </p>
	    </div>
	    <div class="col-md-3 col-sm-6 column col4 text-center">
            <h2 class="who">Who</h2>
            <p>Of course, the artists! But they do not work alone: curators, organizations, sponsors are also essential to every exhibit. Check out our directory.</p>
	        <div class="tb-rl coloredWho">{</div>
            <p class="p-links text-center">
                <a class="home-list btn btn-default btn-who" href="directory/artists">Artists</a> <a class="home-list btn btn-default btn-who" href="directory/curators">Curators</a> <a class="home-list btn btn-default btn-who" href="directory/organizers">Organizers</a> 
                <a class="home-list btn btn-default btn-who" href="directory/sponsors">Sponsors</a> <a class="home-list btn btn-default btn-who" href="directory/publishers">Publishers</a>
            </p>
	    </div>
    </div>
    <div class="norow norow-3 clearfix">
	    <div class="col-md-4 col-md-offset-2 col5 column">
	    <h2>Map</h2>
        <a class="front-img-link" href="map"><img src="<?php print base_path() . \'sites/default/files/structure/map1.png\';?>" class="front-map img-responsive" /></a>
        </div>
        <div class="col-md-4 col6 column">
	    <h2>Calendar</h2>
        <a class="front-img-link" href="calendar"><img src="<?php print base_path() . \'sites/default/files/structure/calendar1.png\';?>" class="front-calendar img-responsive" /></a>
        </div>
    </div>',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'front-content',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'de7e3c3b-ab9d-4512-ba71-62cc2ac6b9c0';
    $display->content['new-de7e3c3b-ab9d-4512-ba71-62cc2ac6b9c0'] = $pane;
    $display->panels['middle'][0] = 'new-de7e3c3b-ab9d-4512-ba71-62cc2ac6b9c0';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['cart_home'] = $page;

  return $pages;

}
