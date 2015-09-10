//
//  ViewController.swift
//  swift_opencv
//
//  Created by Eric Willenson on 8/29/15.
//  Copyright (c) 2015 Eric Willenson. All rights reserved.
//

import Cocoa

class ViewController: NSViewController {

    override func viewDidLoad() {
        super.viewDidLoad()

        // Do any additional setup after loading the view.
        ObjCam.objShowCam();
    }

    override var representedObject: AnyObject? {
        didSet {
        // Update the view, if already loaded.
        }
    }


}

